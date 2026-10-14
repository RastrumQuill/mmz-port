// sub_0802E9F4 at 0x0802E9F4 (thumb)

undefined8 sub_0802E9F4(int param_1,byte param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  iVar1 = (param_3 & 0xff) * 3;
  if (param_2 < (byte)(&DAT_082ad2a0)[iVar1]) {
    *(undefined *)(param_1 + 0x12) = 0x50;
  }
  else if (param_2 < (byte)(&DAT_082ad2a1)[iVar1]) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x11) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else if (param_2 < (byte)(&DAT_082ad2a2)[iVar1]) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x11) = 1;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  else {
    uVar2 = 1;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

