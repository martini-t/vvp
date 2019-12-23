<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="Calculator._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <table cellspacing="4" align="center" bgcolor="#99CCFF" cellpadding="0">
            <tr>
                <td class="style1" colspan="4">
                    <asp:TextBox ID="TextBox1" runat="server" Width="201px" Height="29px" 
                        BackColor="#D9DDC1"></asp:TextBox>
                </td>
                <tr>
                    <td class="style1">
                        <asp:Button ID="Button1" runat="server" Text="7" Height="30px" Width="48px" 
                            OnClick="Button1_Click" BackColor="Black" BorderColor="White " 
                            ForeColor="White" />
                    </td>
                    <td>
                        <asp:Button ID="Button2" runat="server" Text="8" Height="30px" Width="48px" 
                            OnClick="Button2_Click" BackColor="Black" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                    <td class="style2">
                        <asp:Button ID="Button3" runat="server" Text="9" Height="30px" Width="48px" 
                            OnClick="Button3_Click" BackColor="Black" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                    <td class="style3">
                        <asp:Button ID="Button4" runat="server" Text="/" Height="30px" Width="48px"
                            OnClick="Button4_Click" BackColor="#635147" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                </tr>
                <tr>
                    <td class="style1">
                        <asp:Button ID="Button5" runat="server" Text="4" Height="30px" Width="48px" 
                            OnClick="Button5_Click" BackColor="Black" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                    <td>
                        <asp:Button ID="Button6" runat="server" Text="5" Height="30px" Width="48px" 
                            OnClick="Button6_Click" BackColor="Black" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                    <td class="style2">
                        <asp:Button ID="Button7" runat="server" Text="6" Height="30px" Width="48px" 
                            OnClick="Button7_Click" BackColor="Black" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                    <td class="style3">
                        <asp:Button ID="Button8" runat="server" Text="*" Height="30px" Width="48px"
                            OnClick="Button8_Click" BackColor="#635147" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                </tr>
                <tr>
                    <td class="style1">
                        <asp:Button ID="Button9" runat="server" Text="1" Height="30px" Width="48px" 
                            OnClick="Button9_Click" BackColor="Black" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                    <td>
                        <asp:Button ID="Button10" runat="server" Text="2" Height="30px" Width="48px" 
                            OnClick="Button10_Click" BackColor="Black" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                    <td class="style2">
                        <asp:Button ID="Button11" runat="server" Text="3" Height="30px" Width="48px" 
                            OnClick="Button11_Click" BackColor="Black" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                    <td class="style3">
                        <asp:Button ID="Button12" runat="server" Text="-" Height="30px" Width="48px"
                            OnClick="Button12_Click" BackColor="#635147" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                </tr>
                <tr>
                    <td colspan="2">
                        <asp:Button ID="Button13" runat="server" Text="0" Width="100px" OnClick="Button13_Click"
                            Height="30px" BackColor="Black" BorderColor="White" ForeColor="White" />
                    </td>
                    <td class="style2">
                        <asp:Button ID="Button15" runat="server" Text="=" Width="48px"
                            OnClick="Button15_Click" Height="30px" BackColor="#F6811F" 
                            BorderColor="White" ForeColor="White" />
                    </td>
                    <td class="style3">
                        <asp:Button ID="Button14" runat="server" Text="+" OnClick="Button14_Click"
                            Width="48px" Height="30px" BackColor="#635147" BorderColor="White" 
                            ForeColor="White" />
                    </td>
                </tr>
                <tr>
                    <td colspan="2">
                        <asp:Button ID="Button16" runat="server" Text="." OnClick="Button16_Click" Width="100px"
                            Height="30px" BackColor="Black" BorderColor="White" ForeColor="White" />
                    </td>
                    <td colspan="2">
                        <asp:Button ID="Button17" runat="server" Text="C" OnClick="Button17_Click" Width="100px"
                            Height="30px" BackColor="#604E44" BorderColor="White" />
                    </td>
                </tr>
        </table>
    </div>
    </form>
</body>
</html>
