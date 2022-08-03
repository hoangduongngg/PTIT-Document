create trigger postOffice_trigger on dbo.tblPostOffice
after insert, update, delete
AS
  if(@@SERVERNAME <> 'DESKTOP-56G8BU0\MAYCHU')
  BEGIN
    	print 'Chi duoc them, sua, xoa co quan tai tru so'
    	rollback tran
 
 
  END
 
 go

create trigger sender_trigger on dbo.tblSender
after delete
AS
  if(@@SERVERNAME <> 'DESKTOP-56G8BU0\MAYCHU')
  BEGIN
    	print 'Chi duoc xoa nguoi gui tai tru so'
    	rollback tran
  END
 
 go

create trigger receiver_trigger on dbo.tblReceiver
after delete
AS
  if(@@SERVERNAME <> 'DESKTOP-56G8BU0\MAYCHU')
  BEGIN
    	print 'Chi duoc xoa nguoi nhan tai tru so'
    	rollback tran
  END
 
 go

CREATE trigger user_trigger on dbo.tblUser
after insert, update
AS
  declare @ide varchar(50)
  set @ide = (select ID from inserted)
 
  if(@@SERVERNAME = 'DESKTOP-56G8BU0\MAYCHU')
           	begin
                   	if(@ide like 'HP%' OR @ide like 'VP%' OR @ide like 'ND%' OR @ide like 'HY%' OR @ide like 'TB%' OR @ide like 'BG%' OR @ide like 'QN%’)
                   	begin
                           	print 'Thanh cong'
                   	end
    	           	else
                   	begin
                           	print 'Nhan vien khong thuoc bat ki chi nhanh nao'
                           	rollback tran
                   	end
           	end
    	else
    	BEGIN
           	declare @bID varchar(50)
           	if(@@SERVERNAME = 'DESKTOP-MGITPOB\COM1_CONG')
           	begin
                   	SET @bID = 'HP'
           	end
           	if(@@SERVERNAME = 'LAPTOP-5RVHF1EH\COM2_NGUYEN')
           	begin
                   	SET @bID = 'VP'
           	end
           	if(@@SERVERNAME = 'HOANGDUONGNGG\COM3_DUONG')
           	begin
                   	SET @bID = 'ND'
           	end
           	if(@@SERVERNAME = 'DESKTOP-GBDCA67\COM4_CUONG')
           	begin
                   	SET @bID = 'HY'
           	end
           	if(@@SERVERNAME = 'HIEUANH\COM5_HIEU’)
           	begin
                   	SET @bID = 'TB'
           	end
           	if(@@SERVERNAME = 'DESKTOP-INHRPAN\COM6_SON')
           	begin
                   	SET @bID = 'BG'
           	end
           	if(@@SERVERNAME = 'DUNG2001\COM7_DUNG')
           	begin
                   	SET @bID = 'QN'
           	end
           	declare @check varchar(50)
           	set @check = @bID +'%'
           	if(@ide like @check)
                   	begin
                           	print('Thanh cong')
                   	end
           	else
                   	begin
                           	print('ID phai bat dau la '+@bID)
                           	rollback tran
                   	end
    	END
 
 go

CREATE trigger cre_upd_receiver_trigger on dbo.tblReceiver
after insert, update
AS
  declare @ide varchar(50)
  set @address = (select address from inserted)
 
if(@address like 'Hai Phong' 
	OR @address like 'Vinh Phuc' 
	OR @address like 'Nam Dinh' 
	OR @address like 'Hung Yen' 
	OR @address like 'Thai Binh' 
	OR @address like 'Bac Giang' 
	OR @address like 'Quang Ninh')
                   	begin
                           	print ('Thanh cong')
                   	end
                   	else
                   	begin
                           	print ('Khong co tram nao tai dia diem nay')
                           	rollback tran
                   	end 	
 
 
 
 go

CREATE trigger shipper_trigger on dbo.tblShipper
after insert, update
AS
  declare @ide varchar(50)
  set @ide = (select ID from inserted)
 
  if(@@SERVERNAME = 'DESKTOP-56G8BU0\MAYCHU')
           	begin
                   	if(@ide like 'HP%' OR @ide like 'VP%' OR @ide like 'ND%' OR @ide like 'HY%' OR @ide like 'TB%' OR @ide like 'BG%' OR @ide like 'QN%’)
                   	begin
                           	print 'Thanh cong'
                   	end
                   	else
                   	begin
                           	print 'Shipper khong thuoc bat ki chi nhanh nao'
                           	rollback tran
                   	end
           	end
    	else
    	BEGIN
           	declare @bID varchar(50)
           	if(@@SERVERNAME = 'DESKTOP-MGITPOB\COM1_CONG')
           	begin
                   	SET @bID = 'HP'
           	end
           	if(@@SERVERNAME = 'LAPTOP-5RVHF1EH\COM2_NGUYEN')
           	begin
                   	SET @bID = 'VP'
           	end
           	if(@@SERVERNAME = 'HOANGDUONGNGG\COM3_DUONG')
           	begin
                   	SET @bID = 'ND'
           	end
           	if(@@SERVERNAME = 'DESKTOP-GBDCA67\COM4_CUONG')
           	begin
                   	SET @bID = 'HY'
           	end
           	if(@@SERVERNAME = ‘HIEUANH\COM5_HIEU’)
           	begin
                   	SET @bID = 'TB'
           	end
           	if(@@SERVERNAME = 'DESKTOP-INHRPAN\COM6_SON')
           	begin
                   	SET @bID = 'BG'
           	end
           	if(@@SERVERNAME = 'DUNG2001\COM7_DUNG')
           	begin
                   	SET @bID = 'QN'
           	end
           	declare @check varchar(50)
           	set @check = @bID +'%'
           	if(@ide like @check)
                   	begin
                           	print('Thanh cong')
                   	end
           	else
                   	begin
                           	print('ID phai bat dau la '+@bID)
                           	rollback tran
                   	end
    	END
 
    	
go

CREATE trigger cre_upd_distribute_trigger on dbo.tblDistribute
after insert, update
AS
  declare @ide varchar(50)
  set @ide = (select postOfficeId from inserted)
 
  if(@@SERVERNAME = 'DESKTOP-56G8BU0\MAYCHU')
           	begin
                   	if(@ide like 'HP' OR @ide like 'VP' OR @ide like 'ND' OR @ide like 'HY' OR @ide like 'TB' OR @ide like 'BG' OR @ide like 'QN’)
                   	begin
                           	print 'Thanh cong'
                   	end
                   	else
                   	begin
                           	print ‘distribute khong thuoc bat ki chi nhanh nao'
                           	rollback tran
                   	end
           	end
    	else
    	BEGIN
           	declare @bID varchar(50)
           	if(@@SERVERNAME = 'DESKTOP-MGITPOB\COM1_CONG')
           	begin
                   	SET @bID = 'HP'
           	end
           	if(@@SERVERNAME = 'LAPTOP-5RVHF1EH\COM2_NGUYEN')
           	begin
                   	SET @bID = 'VP'
           	end
           	if(@@SERVERNAME = 'HOANGDUONGNGG\COM3_DUONG')
           	begin
                   	SET @bID = 'ND'
           	end
           	if(@@SERVERNAME = 'DESKTOP-GBDCA67\COM4_CUONG')
           	begin
                   	SET @bID = 'HY'
           	end
           	if(@@SERVERNAME = ‘HIEUANH\COM5_HIEU’)
           	begin
                   	SET @bID = 'TB'
           	end
           	if(@@SERVERNAME = 'DESKTOP-INHRPAN\COM6_SON')
           	begin
                   	SET @bID = 'BG'
           	end
           	if(@@SERVERNAME = 'DUNG2001\COM7_DUNG')
           	begin
                   	SET @bID = 'QN'
           	end
           	if(@ide like @bID)
    	           	begin
                           	print('Thanh cong')
                   	end
           	else
                   	begin
                           	print('ID phai bat dau la '+@bID)
                           	rollback tran
                   	end
    	END
 go

create trigger distribute_trigger on dbo.tblDistribute
after insert, update, delete
AS
  if(@@SERVERNAME <> 'DESKTOP-56G8BU0\MAYCHU')
  BEGIN
    	print 'Chi duoc them, sua, xoa phan tan san pham tai tru so'
    	rollback tran
  END
