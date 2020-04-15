classdef app1_exported < matlab.apps.AppBase

    % Properties that correspond to app components
    properties (Access = public)
        UIFigure                     matlab.ui.Figure
        GridLayout                   matlab.ui.container.GridLayout
        LeftPanel                    matlab.ui.container.Panel
        R1EditFieldLabel             matlab.ui.control.Label
        R1EditField                  matlab.ui.control.NumericEditField
        REditFieldLabel              matlab.ui.control.Label
        REditField                   matlab.ui.control.NumericEditField
        Image                        matlab.ui.control.Image
        VEditFieldLabel              matlab.ui.control.Label
        VEditField                   matlab.ui.control.NumericEditField
        Rx_minEditFieldLabel         matlab.ui.control.Label
        Rx_minEditField              matlab.ui.control.NumericEditField
        Rx_maxEditFieldLabel         matlab.ui.control.Label
        Rx_maxEditField              matlab.ui.control.NumericEditField
        DesarrollRGRCHLabel          matlab.ui.control.Label
        v1Label                      matlab.ui.control.Label
        RightPanel                   matlab.ui.container.Panel
        UIAxes                       matlab.ui.control.UIAxes
        CalcularButton               matlab.ui.control.Button
        UniversidadNacionalAutnomadeMxicoLabel  matlab.ui.control.Label
        FacultaddeIngenieraLabel     matlab.ui.control.Label
        MedicineInstrumentacinLabel  matlab.ui.control.Label
        GuardardatosButton           matlab.ui.control.Button
        BorrarButton                 matlab.ui.control.Button
    end

    % Properties that correspond to apps with auto-reflow
    properties (Access = private)
        onePanelWidth = 576;
    end

    % Callbacks that handle component events
    methods (Access = private)

        % Callback function
        function RxSliderValueChanged(app, event)
            
        end

        % Value changed function: R1EditField
        function R1EditFieldValueChanged(app, event)
           
            
        end

        % Value changed function: REditField
        function REditFieldValueChanged(app, event)
           
            
        end

        % Value changed function: VEditField
        function VEditFieldValueChanged(app, event)
           
            
        end

        % Button pushed function: CalcularButton
        function CalcularButtonPushed(app, event)
            V = app.VEditField.Value;
            R1 = app.R1EditField.Value;
            R = app.REditField.Value;
            Rx_min = app.Rx_minEditField.Value;
            Rx_max = app.Rx_maxEditField.Value;
            Rrange = linspace(Rx_max,Rx_min,50);
            for i=1:length(Rrange)
            Vab = V*((R1./(R1+R)).*((Rrange-R)./(R1+Rrange)));
            Vablin = V*((Rrange-R)./(R1+Rrange));
            end
            plot(app.UIAxes, Rrange,Vab,Rrange,Vablin)
            legend(app.UIAxes,{'Real','Lineal'},'Location','Best')
        end

        % Value changed function: Rx_minEditField
        function Rx_minEditFieldValueChanged(app, event)
            
            
        end

        % Button pushed function: GuardardatosButton
        function GuardardatosButtonPushed(app, event)
            V = app.VEditField.Value;
            R1 = app.R1EditField.Value;
            R = app.REditField.Value;
            Rx_min = app.Rx_minEditField.Value;
            Rx_max = app.Rx_maxEditField.Value;
            Rrange = linspace(Rx_min,Rx_max,50);
            for i=1:length(Rrange)
            Vab = V*((R1./(R1+R)).*((Rrange-R)./(R1+Rrange)));
            Vablin = V*((Rrange-R)./(R1+Rrange));
            end
            A = [Rrange' Vab' Vablin'];
            [file,path] = uiputfile('*.csv');
            filename = fullfile(path,file);
            csvwrite(filename,A);
            
        end

        % Button pushed function: BorrarButton
        function BorrarButtonPushed(app, event)
            clo (app.UIAxes)
            clear all
        end

        % Changes arrangement of the app based on UIFigure width
        function updateAppLayout(app, event)
            currentFigureWidth = app.UIFigure.Position(3);
            if(currentFigureWidth <= app.onePanelWidth)
                % Change to a 2x1 grid
                app.GridLayout.RowHeight = {557, 557};
                app.GridLayout.ColumnWidth = {'1x'};
                app.RightPanel.Layout.Row = 2;
                app.RightPanel.Layout.Column = 1;
            else
                % Change to a 1x2 grid
                app.GridLayout.RowHeight = {'1x'};
                app.GridLayout.ColumnWidth = {247, '1x'};
                app.RightPanel.Layout.Row = 1;
                app.RightPanel.Layout.Column = 2;
            end
        end
    end

    % Component initialization
    methods (Access = private)

        % Create UIFigure and components
        function createComponents(app)

            % Create UIFigure and hide until all components are created
            app.UIFigure = uifigure('Visible', 'off');
            app.UIFigure.AutoResizeChildren = 'off';
            app.UIFigure.Position = [100 100 716 557];
            app.UIFigure.Name = 'UI Figure';
            app.UIFigure.SizeChangedFcn = createCallbackFcn(app, @updateAppLayout, true);

            % Create GridLayout
            app.GridLayout = uigridlayout(app.UIFigure);
            app.GridLayout.ColumnWidth = {247, '1x'};
            app.GridLayout.RowHeight = {'1x'};
            app.GridLayout.ColumnSpacing = 0;
            app.GridLayout.RowSpacing = 0;
            app.GridLayout.Padding = [0 0 0 0];
            app.GridLayout.Scrollable = 'on';

            % Create LeftPanel
            app.LeftPanel = uipanel(app.GridLayout);
            app.LeftPanel.Layout.Row = 1;
            app.LeftPanel.Layout.Column = 1;

            % Create R1EditFieldLabel
            app.R1EditFieldLabel = uilabel(app.LeftPanel);
            app.R1EditFieldLabel.HorizontalAlignment = 'right';
            app.R1EditFieldLabel.Position = [65 191 25 22];
            app.R1EditFieldLabel.Text = 'R1';

            % Create R1EditField
            app.R1EditField = uieditfield(app.LeftPanel, 'numeric');
            app.R1EditField.Limits = [0 Inf];
            app.R1EditField.ValueChangedFcn = createCallbackFcn(app, @R1EditFieldValueChanged, true);
            app.R1EditField.Position = [105 191 100 22];
            app.R1EditField.Value = 1000;

            % Create REditFieldLabel
            app.REditFieldLabel = uilabel(app.LeftPanel);
            app.REditFieldLabel.HorizontalAlignment = 'right';
            app.REditFieldLabel.Position = [65 142 25 22];
            app.REditFieldLabel.Text = 'R';

            % Create REditField
            app.REditField = uieditfield(app.LeftPanel, 'numeric');
            app.REditField.ValueChangedFcn = createCallbackFcn(app, @REditFieldValueChanged, true);
            app.REditField.Position = [105 142 100 22];
            app.REditField.Value = 100;

            % Create Image
            app.Image = uiimage(app.LeftPanel);
            app.Image.Position = [8 284 235 170];
            app.Image.ImageSource = 'PW.PNG';

            % Create VEditFieldLabel
            app.VEditFieldLabel = uilabel(app.LeftPanel);
            app.VEditFieldLabel.HorizontalAlignment = 'right';
            app.VEditFieldLabel.Position = [61 236 25 22];
            app.VEditFieldLabel.Text = 'V';

            % Create VEditField
            app.VEditField = uieditfield(app.LeftPanel, 'numeric');
            app.VEditField.ValueChangedFcn = createCallbackFcn(app, @VEditFieldValueChanged, true);
            app.VEditField.Position = [101 236 100 22];
            app.VEditField.Value = 10;

            % Create Rx_minEditFieldLabel
            app.Rx_minEditFieldLabel = uilabel(app.LeftPanel);
            app.Rx_minEditFieldLabel.HorizontalAlignment = 'right';
            app.Rx_minEditFieldLabel.Position = [44 99 46 22];
            app.Rx_minEditFieldLabel.Text = 'Rx_min';

            % Create Rx_minEditField
            app.Rx_minEditField = uieditfield(app.LeftPanel, 'numeric');
            app.Rx_minEditField.ValueChangedFcn = createCallbackFcn(app, @Rx_minEditFieldValueChanged, true);
            app.Rx_minEditField.Position = [105 99 100 22];
            app.Rx_minEditField.Value = 100;

            % Create Rx_maxEditFieldLabel
            app.Rx_maxEditFieldLabel = uilabel(app.LeftPanel);
            app.Rx_maxEditFieldLabel.HorizontalAlignment = 'right';
            app.Rx_maxEditFieldLabel.Position = [40 46 50 22];
            app.Rx_maxEditFieldLabel.Text = 'Rx_max';

            % Create Rx_maxEditField
            app.Rx_maxEditField = uieditfield(app.LeftPanel, 'numeric');
            app.Rx_maxEditField.Position = [105 46 100 22];
            app.Rx_maxEditField.Value = 150;

            % Create DesarrollRGRCHLabel
            app.DesarrollRGRCHLabel = uilabel(app.LeftPanel);
            app.DesarrollRGRCHLabel.Position = [61 500 111 22];
            app.DesarrollRGRCHLabel.Text = 'Desarrolló: RGRCH';

            % Create v1Label
            app.v1Label = uilabel(app.LeftPanel);
            app.v1Label.Position = [93 479 48 22];
            app.v1Label.Text = '2020 v1';

            % Create RightPanel
            app.RightPanel = uipanel(app.GridLayout);
            app.RightPanel.Layout.Row = 1;
            app.RightPanel.Layout.Column = 2;

            % Create UIAxes
            app.UIAxes = uiaxes(app.RightPanel);
            title(app.UIAxes, 'Curva del Puente de Wheastone')
            xlabel(app.UIAxes, 'Rx')
            ylabel(app.UIAxes, 'VAB')
            app.UIAxes.Position = [6 75 457 322];

            % Create CalcularButton
            app.CalcularButton = uibutton(app.RightPanel, 'push');
            app.CalcularButton.ButtonPushedFcn = createCallbackFcn(app, @CalcularButtonPushed, true);
            app.CalcularButton.Position = [169 406 142 35];
            app.CalcularButton.Text = 'Calcular';

            % Create UniversidadNacionalAutnomadeMxicoLabel
            app.UniversidadNacionalAutnomadeMxicoLabel = uilabel(app.RightPanel);
            app.UniversidadNacionalAutnomadeMxicoLabel.FontSize = 14;
            app.UniversidadNacionalAutnomadeMxicoLabel.FontWeight = 'bold';
            app.UniversidadNacionalAutnomadeMxicoLabel.Position = [89 496 301 29];
            app.UniversidadNacionalAutnomadeMxicoLabel.Text = 'Universidad Nacional Autónoma de México';

            % Create FacultaddeIngenieraLabel
            app.FacultaddeIngenieraLabel = uilabel(app.RightPanel);
            app.FacultaddeIngenieraLabel.FontSize = 14;
            app.FacultaddeIngenieraLabel.FontWeight = 'bold';
            app.FacultaddeIngenieraLabel.Position = [143 477 301 29];
            app.FacultaddeIngenieraLabel.Text = 'Facultad de Ingeniería';

            % Create MedicineInstrumentacinLabel
            app.MedicineInstrumentacinLabel = uilabel(app.RightPanel);
            app.MedicineInstrumentacinLabel.FontSize = 14;
            app.MedicineInstrumentacinLabel.FontWeight = 'bold';
            app.MedicineInstrumentacinLabel.Position = [128 451 301 29];
            app.MedicineInstrumentacinLabel.Text = 'Medición e Instrumentación';

            % Create GuardardatosButton
            app.GuardardatosButton = uibutton(app.RightPanel, 'push');
            app.GuardardatosButton.ButtonPushedFcn = createCallbackFcn(app, @GuardardatosButtonPushed, true);
            app.GuardardatosButton.BackgroundColor = [0.502 0.502 0.502];
            app.GuardardatosButton.FontWeight = 'bold';
            app.GuardardatosButton.Position = [329 25 100 22];
            app.GuardardatosButton.Text = 'Guardar datos';

            % Create BorrarButton
            app.BorrarButton = uibutton(app.RightPanel, 'push');
            app.BorrarButton.ButtonPushedFcn = createCallbackFcn(app, @BorrarButtonPushed, true);
            app.BorrarButton.Position = [40 25 100 22];
            app.BorrarButton.Text = 'Borrar';

            % Show the figure after all components are created
            app.UIFigure.Visible = 'on';
        end
    end

    % App creation and deletion
    methods (Access = public)

        % Construct app
        function app = app1_exported

            % Create UIFigure and components
            createComponents(app)

            % Register the app with App Designer
            registerApp(app, app.UIFigure)

            if nargout == 0
                clear app
            end
        end

        % Code that executes before app deletion
        function delete(app)

            % Delete UIFigure when app is deleted
            delete(app.UIFigure)
        end
    end
end