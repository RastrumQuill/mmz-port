// sub_080A1D08 at 0x080A1D08 (thumb)

undefined4 sub_080A1D08(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,6);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080921A4(param_1,0,0);
    sub_080921A4(param_1,1,0);
    *(undefined *)(param_1 + 0x12) = 0xff;
    if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
      uVar2 = 0x180;
    }
    else {
      uVar2 = 0xfffffe80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
  }
  sub_0809C980(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + -1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08015698(0,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

