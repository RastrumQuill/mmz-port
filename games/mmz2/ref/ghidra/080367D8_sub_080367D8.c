// sub_080367D8 at 0x080367D8 (thumb)

undefined8 sub_080367D8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((&DAT_08335dcc)[(uint)*(byte *)(param_1 + 0x177) * 2] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    if ((*(byte *)(param_1 + 10) >> 4 & 1) != 0) {
      uVar2 = 1;
    }
  }
  iVar1 = sub_080361A0(param_1,uVar2,
                       (int)(char)(&DAT_08335dcd)[(uint)*(byte *)(param_1 + 0x177) * 2],param_2);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0x2b8) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

