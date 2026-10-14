// sub_080AAC9C at 0x080AAC9C (thumb)

undefined4 sub_080AAC9C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  puVar6 = (uint *)(param_1 + 0x8c);
  if ((*puVar6 & 0x200) == 0) {
    sub_080177F4(param_1);
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          return in_lr;
        }
        if ((*puVar6 & 0x800) != 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
          if (*(char *)(iVar3 + 8) == '\0') {
            *(undefined *)(iVar3 + 0x143) = 1;
            *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 0x58) + 0x200;
            iVar5 = sub_0800A104(*(undefined4 *)(iVar3 + 0x54));
            if (iVar5 < *(int *)(iVar3 + 0x58)) {
              uVar4 = sub_0800A104(*(undefined4 *)(iVar3 + 0x54));
              *(undefined4 *)(iVar3 + 0x58) = uVar4;
            }
            uVar4 = *(undefined4 *)(iVar3 + 0x58);
            *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
            *(undefined4 *)(param_1 + 0x58) = uVar4;
            if ((*(uint *)(iVar3 + 0x8c) & 1) == 0) {
              return in_lr;
            }
          }
          *puVar6 = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          return in_lr;
        }
        *(undefined *)(param_1 + 0x11) = 1;
        *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
        *(undefined *)(iVar3 + 0xc5) = 0;
        sub_0800471C(0x3f);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
        sub_080AAE2C(param_1);
        return in_lr;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      if ((*puVar6 & 0x800) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
        uVar4 = sub_080AA8B4(param_1);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
        *(undefined *)(iVar3 + 0xc5) = 1;
        *(undefined *)(param_1 + 0xd) = 2;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
        sub_0800471C(0x40);
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      sub_08007390(param_1 + 0x74,&DAT_08368c54);
      *(undefined2 *)(param_1 + 0xbc) = 0x200;
      return in_lr;
    }
    iVar3 = *(ushort *)(param_1 + 0xbc) - 1;
    *(ushort *)(param_1 + 0xbc) = (ushort)iVar3;
    if (iVar3 * 0x10000 >> 0x10 != -1) {
      return in_lr;
    }
  }
  sub_0800471C(0x3f);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  sub_080AAE2C(param_1);
  return in_lr;
}

