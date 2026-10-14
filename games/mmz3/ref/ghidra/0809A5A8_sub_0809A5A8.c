// sub_0809A5A8 at 0x0809A5A8 (thumb)

undefined4 sub_0809A5A8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 100) = 0x18;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      uVar3 = *(int *)(param_1 + 100) - 1;
      *(uint *)(param_1 + 100) = uVar3;
      if ((uVar3 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
      if (*(int *)(param_1 + 100) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0x68) == -1) {
      sub_080048A0(param_1 + 0x34,0x809a491);
      *(int *)(param_1 + 0x3c) = param_1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
    }
    else {
      sub_080048A0(param_1 + 0x34,0x809a511);
      *(int *)(param_1 + 0x3c) = param_1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
      *(undefined *)(param_1 + 0x13) = 0;
      iVar2 = *(int *)(param_1 + 0x68);
      while (iVar2 != 0) {
        iVar2 = FUN_080fe2f8(iVar2,10);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
    }
    *(undefined4 *)(param_1 + 100) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar2;
  if (iVar2 == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

