program meow2;
uses crt;
 
const n=3;
const m=7;

var a:array[1..1000,1..1000] of real;
    sum, bike: real;
    f : file of double;
    i, j, ii, k: byte;
  
procedure initarray();
  
  procedure generate();
  var i,j:integer;
  begin
    randomize;
    for i:=1 to n do
     for j:=1 to m do
      a[i,j]:=random*20-10;
  end;
  
  procedure enter();
  var i,j:integer;
  begin
    for i:=1 to n do
      for j:=1 to m do
      begin
        write('������� ������� �',i,',',j,': ');
        read(a[i,j]);
      end;
  end;
  
  procedure files_in();
  var i,j:integer;
  begin
    assign(f, 'mas1.txt');
    reset(f);
    for i:=1 to n do
      for j:=1 to m do
        read(f, (a[i,j]));
        close(f);
  end;
  
begin

  writeln('1. ��������� �������');
  writeln('2. ������ ���� �������');
  writeln('3. ������ ������� �� �����');
  
  write('=> '); readln(k);
  
  case k of
       1 : generate();
       2 : enter();
       3 : files_in();
  end;
  
end;

procedure outarray();

  procedure monitor_out;
  var i,j:integer;
  begin
    writeln('�������� �������:');
    for i:=1 to n do
    begin
      writeln;
      for j:=1 to m do
        write(a[i,j]:10:5);
    end;
  readkey();
  end;
  
  procedure file_out;
   var f: file of double; i,j:integer;
  begin
    assign(f,'out.txt');
    rewrite(f);
    for i:=1 to n do
      for j:=1 to m do
          write(f, (a[i,j]));
        close(f);
  end;
  
begin
    writeln('1. ����� ������� �� �����');
    writeln('2. ����� ������� � ����');
    write('=> '); readln(k);
  
     case k of
       1 : monitor_out();
       2 : file_out();
     end; 
end;

procedure v_input();
begin
  write('������� �������� => ');
  read(bike);
end;

procedure sum_kol();
var i,j:integer;
begin
    sum:=0;
    for i:= 1 to m do
      begin
      for j:= 1 to n do
        sum:=a[j,i]+sum;
      ii:=i;
      if (sum>bike) then
        begin
          k:=k+1;
          writeln;
          writeln(i,' - �������');
          writeln;
          for j:= 1 to n do
            begin
              write(' ',a[j,ii],' ');
              writeln;
            end;
        end;
      sum:=0;
      end;
  readkey();
  end;


begin
  repeat
    clrscr;
    writeln('1. ���� �������');
    writeln('2. ����� �������');
    writeln('3. ���� ��������');
    writeln('4. ������ ��������');
    writeln('0. ����� �� ���������');
    write('=> '); readln(k);
  
     case k of
       1 : initarray();
       2 : outarray();
       3 : v_input();
       4 : sum_kol();
     end;
  
  until (k=0);
end.
