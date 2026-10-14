// sub_08073F98 at 0x08073F98 (thumb)

undefined8 sub_08073F98(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\n') && (*(int *)(param_1 + 0xb4) == 0)) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar2 = sub_08063614(param_1);
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 0xd) == '\t') {
          *(undefined *)(param_1 + 0x25) = 0x18;
          iVar2 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          if (iVar2 < 0) {
            uVar1 = 0xb;
          }
          else {
            uVar1 = 4;
          }
          *(undefined *)(param_1 + 0xd) = uVar1;
          *(undefined *)(param_1 + 0xe) = 0;
          iVar2 = *(int *)(param_1 + 0x2c);
          if (iVar2 != 0) {
            *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
            *(undefined4 *)(iVar2 + 0xc) = 3;
            *(undefined4 *)(iVar2 + 0x14) =
                 *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar2 + 9)] + 0xc);
          }
        }
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083635f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363628 + (uint)*(byte *)(param_1 + 0xd) * 4));
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        sub_080177F4(param_1);
LAB_08074038:
        uVar3 = 1;
        goto LAB_08074074;
      }
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar2 = sub_08063614(param_1);
      if (iVar2 == 0) {
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else if (((*(byte *)(param_1 + 0xd) < 3) || ((*(uint *)(param_1 + 0x8c) & 1) == 0)) ||
              ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0)) goto LAB_08074038;
    }
  }
  uVar3 = 0;
LAB_08074074:
  return CONCAT44(in_lr,uVar3);
}

