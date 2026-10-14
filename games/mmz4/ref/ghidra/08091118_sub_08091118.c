// sub_08091118 at 0x08091118 (thumb)

undefined4 sub_08091118(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    uVar1 = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    if (CONCAT11(*(undefined *)(iVar2 + 0x1e),*(undefined *)(iVar2 + 0x70)) == 0x3c07) {
      sub_0801CFC8(param_1,0x3c08,(short)*(char *)(iVar2 + 0x71),(short)*(char *)(iVar2 + 0x72));
    }
    else {
      sub_0801CFC8(param_1,0x3c0c,(short)*(char *)(iVar2 + 0x71),(short)*(char *)(iVar2 + 0x72));
    }
    sub_0801CFF0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08090D64(param_1);
  }
  return in_lr;
}

