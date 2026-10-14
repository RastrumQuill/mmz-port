// sub_08104790 at 0x08104790 (thumb)

undefined4 sub_08104790(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(int *)(*(int *)(param_1 + 0x28) + 0xde0) == 0) {
    *(undefined *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(int *)(iVar2 + 0xdf4) == 0) {
        if ((int)(*(int *)(iVar2 + 0xdc8) + ((uint)*(byte *)(param_1 + 0x11) * 0x10 + 8) * 0x100) <
            *(int *)(param_1 + 0x58)) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
        }
        iVar3 = *(int *)(param_1 + 0x2c);
        if (iVar3 == 0) {
          if (*(byte *)(param_1 + 0x11) < 2) {
            iVar4 = *(int *)(param_1 + 0xb8);
            iVar3 = iVar4 - *(int *)(param_1 + 0x58);
            if (iVar3 < 0) {
              iVar3 = *(int *)(param_1 + 0x58) - iVar4;
            }
            if (0x1000 < iVar3) {
              local_1c = *(undefined4 *)(param_1 + 0x54);
              local_18 = *(int *)(param_1 + 0xb8);
              uVar1 = sub_08104654(&local_1c,
                                   (uint)*(byte *)(param_1 + 0x10) << 8 |
                                   *(byte *)(param_1 + 0x11) + 1,iVar2);
              *(undefined4 *)(param_1 + 0x2c) = uVar1;
            }
          }
        }
        else if (1 < *(byte *)(iVar3 + 0xc)) {
          *(undefined *)(iVar3 + 0xb4) = 0;
          iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x2c);
          if (iVar2 != 0) {
            *(int *)(param_1 + 0x2c) = iVar2;
            *(char *)(iVar2 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
            *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb5) = 1;
          }
        }
      }
      sub_08104A3C(param_1);
      sub_0801CFF0(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xe) = 0;
      sub_081048B0(param_1);
    }
  }
  return in_lr;
}

