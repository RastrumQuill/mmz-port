// sub_08058950 at 0x08058950 (thumb)

undefined4 sub_08058950(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar2 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x68) = uVar2;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar3;
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
      *(int *)(param_1 + 0x58) = iVar3;
      iVar4 = *(int *)(param_1 + 0x68) + 0x5d00;
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x58) = iVar4;
        *(undefined *)(param_1 + 0xd) = 0xc;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x90);
    sub_08017700(param_1,0xb20a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  sub_08007390(param_1 + 0x74,
               &DAT_08360594 + (uint)(byte)(&DAT_08361296)[*(char *)(param_1 + 0x71)] * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

