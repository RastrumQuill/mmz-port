// sub_080DB400 at 0x080DB400 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080DB400(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (DAT_02030c1a != 0) {
        return in_lr;
      }
      DAT_0202f5c8 = '\0';
      cVar2 = '\x01';
      goto LAB_080db4fa;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((_DAT_02030104 & 0x41000) != 0x1000) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_0800736C(param_1 + 0x74,&DAT_0836dbd8,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar3 = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x54) = iVar3;
    uVar4 = sub_0800A104(iVar3,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
    return in_lr;
  }
  if (DAT_0202f5c8 == '\0') {
    return in_lr;
  }
  if (DAT_03003908 != param_1 + 0x74) {
    return in_lr;
  }
  sub_080EA1B8(0x1333);
  cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080db4fa:
  *(char *)(param_1 + 0xd) = cVar2;
  return in_lr;
}

