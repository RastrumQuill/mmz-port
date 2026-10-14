// sub_080C98B4 at 0x080C98B4 (thumb)

undefined4 sub_080C98B4(int param_1)

{
  short sVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_08862d34 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if ((*(char *)(param_1 + 0x11) == '\0') && (pcVar2 = (char *)(param_1 + 0xc1), *pcVar2 == '\0')) {
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((sVar1 != 0) && ((sVar1 != 0xf && (sVar1 != 0x2f)))) {
      *pcVar2 = '\x01';
      if (*(int *)(param_1 + 0x28) != 0) {
        sub_080CA084(param_1);
      }
      uVar3 = sub_080C97DC(param_1 + 0x54,1,1,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) == '\x01') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        *pcVar2 = -1;
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

