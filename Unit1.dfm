object FAnimacja: TFAnimacja
  Left = 192
  Top = 114
  Width = 537
  Height = 320
  Caption = 'FAnimacja'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Visible = True
  PixelsPerInch = 96
  TextHeight = 13
  object PaintBox: TPaintBox
    Left = 0
    Top = 0
    Width = 529
    Height = 286
    Align = alClient
    OnPaint = PaintBoxPaint
  end
  object TimerZegar: TTimer
    Interval = 1
    OnTimer = TimerZegarTimer
    Left = 96
    Top = 232
  end
end
