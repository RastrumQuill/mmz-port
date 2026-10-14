// sub_0800FC94 at 0x0800FC94 (thumb)

undefined8 sub_0800FC94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if ((iVar2 != 0) && (((*(ushort *)(iVar2 + 0x90) & 0x40) != 0 || (*(short *)(iVar2 + 0x8c) == 0)))
     ) {
    DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x10;
  }
  if (((DAT_02022b64 & 1) == 0) && ((DAT_02022b64 & 0x10) != 0)) {
    DAT_02023658 = DAT_02023658 | 2;
    DAT_02004fa0 = DAT_02004fa0 | 0x80;
    if (*(undefined **)(param_1 + 0x14) != &DAT_0829fe8c) {
      if (DAT_02022cb0 == 0) {
        sub_08014444(&DAT_02022b6c);
      }
      else {
        sub_08014444(&DAT_02022b6c,&DAT_0829fed4);
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

