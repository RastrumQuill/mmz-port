// sub_080E17CC at 0x080E17CC (thumb)

undefined4 sub_080E17CC(undefined4 *param_1,uint param_2,short param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x3e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e191d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(int *)(iVar1 + 0x5c) =
         (int)param_3 *
         (int)*(short *)((int)&DAT_08128c10 + (((param_2 & 0xff) + 0x40) * 0x1000000 >> 0x17)) >> 8;
    *(int *)(iVar1 + 0x60) = (int)param_3 * (int)(short)(&DAT_08128c10)[param_2 & 0xff] >> 8;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(byte *)(iVar1 + 0x11) = param_4 | 0x70;
  }
  return in_lr;
}

