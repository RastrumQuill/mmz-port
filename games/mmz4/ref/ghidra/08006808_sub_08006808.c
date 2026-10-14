// sub_08006808 at 0x08006808 (thumb)

undefined4 sub_08006808(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = 0xff;
  iVar1 = sub_08001594(5,0x3c);
  if (iVar1 != 0) {
    sub_080016F0(5,&DAT_02000a70,0x3c);
    do {
      sub_080012EC(1);
      if (DAT_02000790 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)(byte)DAT_020007ae;
      }
    } while (uVar2 == 0);
  }
  if ((int)(uVar2 * 0x1000000) < 0) {
    local_14 = 0;
    sub_081284E4(&local_14,&DAT_02000a70,0x1000008);
    local_10 = 0;
    sub_081284E8(&local_10,&DAT_02000a90,&DAT_05000007);
    sub_08006A6C(0,0x96);
    sub_08006A6C(1,0x96);
    sub_08006A6C(2,200);
    sub_08006A6C(3,0x2ee);
    sub_08006A6C(4,0x960);
    sub_08006A6C(5,0x15e);
    sub_08006A6C(6,200);
  }
  DAT_02000aa8 = 0;
  return in_lr;
}

