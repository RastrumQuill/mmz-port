// sub_080EB87C at 0x080EB87C (thumb)

undefined4 sub_080EB87C(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  if (*(short *)(DAT_0202eda0 + 10) < 8) {
LAB_080eb8f2:
    if (iVar2 != 0) goto LAB_080eb952;
  }
  else {
    iVar2 = sub_08005500(DAT_0202eda0);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x1e;
      *(undefined *)(iVar2 + 9) = 6;
      *(undefined4 *)(iVar2 + 0x14) = 0x80ebb91;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(uint *)(iVar2 + 0x54) = (param_2 & 0xfffff000) + 0x800;
      *(uint *)(iVar2 + 0x58) = (param_3 & 0xfffff000) + 0x1000;
      *(undefined *)(iVar2 + 0x10) = *(undefined *)(param_1 + 0x10);
      cVar1 = *(char *)(param_1 + 0x11);
      if (cVar1 != -1) {
        cVar1 = cVar1 + '\x01';
      }
      *(char *)(iVar2 + 0x11) = cVar1;
      goto LAB_080eb8f2;
    }
  }
  iVar2 = sub_08005500(DAT_0202ed9c);
  if (iVar2 == 0) {
    return in_lr;
  }
  *(undefined *)(iVar2 + 0x25) = 1;
  *(undefined *)(iVar2 + 9) = 0x22;
  *(undefined4 *)(iVar2 + 0x14) = 0x80da0b5;
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(uint *)(iVar2 + 0x54) = (param_2 & 0xfffff000) + 0x800;
  *(uint *)(iVar2 + 0x58) = (param_3 & 0xfffff000) + 0x1000;
  *(undefined *)(iVar2 + 0x10) = *(undefined *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x11);
  if (cVar1 != -1) {
    cVar1 = cVar1 + '\x01';
  }
  *(char *)(iVar2 + 0x11) = cVar1;
  if (iVar2 == 0) {
    return in_lr;
  }
LAB_080eb952:
  if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_0800C6D8(param_2,param_3);
  }
  return in_lr;
}

