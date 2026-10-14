// sub_08036FE0 at 0x08036FE0 (thumb)

undefined4 sub_08036FE0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  uVar4 = *(byte *)(iVar3 + 0x136) & 1;
  if ((*(byte *)(iVar3 + 0x136) & 1) == 0) {
    if (*(byte *)(param_1 + 0x10) < 2) {
      return in_lr;
    }
    cVar2 = *(char *)(iVar3 + 0xc2);
    if (cVar2 != *(char *)(param_1 + 0xc1)) {
LAB_080370be:
      bVar1 = *(byte *)(param_1 + 10);
      goto LAB_080370c4;
    }
    bVar1 = *(byte *)(param_1 + 0x10);
    if (bVar1 == 4) {
      uVar4 = (*(ushort *)(iVar3 + 0xc6) & 4) >> 2;
LAB_080370ba:
      if (uVar4 != 0) {
        return in_lr;
      }
      goto LAB_080370be;
    }
    if (4 < bVar1) {
      if (bVar1 != 5) {
        return in_lr;
      }
      uVar4 = ((*(ushort *)(iVar3 + 0xc6) & 8) << 0x10) >> 0x13;
      goto LAB_080370ba;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
    if (cVar2 != '\0') {
      if (cVar2 != '\x02') {
        if (cVar2 != '\x03') {
          return in_lr;
        }
        if ((*(ushort *)(iVar3 + 0xc6) & 8) == 0) {
          return in_lr;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(uint *)(param_1 + 0x8c) = uVar4;
        *(uint *)(param_1 + 0x90) = uVar4;
        *(char *)(param_1 + 0x94) = (char)uVar4;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        bVar1 = *(byte *)(param_1 + 9);
        *(undefined4 *)(param_1 + 0xc) = 3;
        goto LAB_080370ec;
      }
      if ((*(ushort *)(iVar3 + 0xc6) & 4) == 0) {
        return in_lr;
      }
      goto LAB_080370be;
    }
    if ((*(ushort *)(iVar3 + 0xc6) & 1) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar4 = 0;
LAB_080370c4:
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar4;
    *(uint *)(param_1 + 0x90) = uVar4;
    *(char *)(param_1 + 0x94) = (char)uVar4;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  bVar1 = *(byte *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0xc) = 3;
LAB_080370ec:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[bVar1] + 0xc);
  return in_lr;
}

