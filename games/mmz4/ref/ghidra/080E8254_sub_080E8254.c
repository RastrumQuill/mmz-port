// sub_080E8254 at 0x080E8254 (thumb)

undefined4 sub_080E8254(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x59;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e8449;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    iVar3 = (int)((param_3 & 0xffff) *
                 (int)*(short *)((int)&DAT_08128c10 +
                                (((param_2 & 0xff) + 0x40) * 0x1000000 >> 0x17))) >> 8;
    *(int *)(iVar1 + 0x5c) = iVar3;
    iVar4 = (int)((param_3 & 0xffff) * (int)(short)(&DAT_08128c10)[param_2 & 0xff]) >> 8;
    *(int *)(iVar1 + 0x60) = iVar4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(int *)(iVar1 + 100) = iVar3 >> 4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    *(int *)(iVar1 + 0x68) = iVar4 >> 4;
  }
  return in_lr;
}

