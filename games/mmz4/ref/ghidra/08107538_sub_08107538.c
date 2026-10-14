// sub_08107538 at 0x08107538 (thumb)

undefined4 sub_08107538(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0xdf0) == *(byte *)(param_1 + 0xb5) + 1) {
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xdf8) = *(undefined4 *)(param_1 + 0x28);
      }
      if ((*(char *)(param_1 + 0xb7) == '\x01') &&
         (iVar1 = *(int *)(param_1 + 0x2c), *(int *)(iVar1 + 0xde0) != 0)) {
        uVar3 = *(int *)(iVar1 + 0xe10) - 1;
        if (uVar3 < 4) {
          *(uint *)(iVar1 + 0xdd4) =
               *(int *)(iVar1 + 0xdd4) +
               (uint)*(byte *)((int)&DAT_08868f0c + *(int *)(iVar1 + 0xe10) + 1);
          sub_08002B10(*(undefined2 *)(&DAT_08868f04 + uVar3 * 2));
        }
        else {
          *(int *)(iVar1 + 0xdd4) = *(int *)(iVar1 + 0xdd4) + 0x17;
          sub_08002B10(0x1bd);
        }
      }
      iVar2 = *(int *)(param_1 + 0x2c);
      iVar1 = *(int *)(iVar2 + 0xdf0) + -1;
      *(int *)(iVar2 + 0xdf0) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar2 + 0xdf8) = 0;
      }
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0xdf4) == *(byte *)(param_1 + 0xb5) + 1) {
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xdfc) = *(undefined4 *)(param_1 + 0x28);
      }
      if ((*(char *)(param_1 + 0xb7) == '\x01') &&
         (iVar1 = *(int *)(param_1 + 0x2c), *(int *)(iVar1 + 0xde0) != 0)) {
        uVar3 = *(int *)(iVar1 + 0xe14) - 1;
        if (uVar3 < 4) {
          *(uint *)(iVar1 + 0xdd4) =
               *(int *)(iVar1 + 0xdd4) +
               (uint)*(byte *)((int)&DAT_08868f0c + *(int *)(iVar1 + 0xe14) + 1);
          sub_08002B10(*(undefined2 *)(&DAT_08868f04 + uVar3 * 2));
        }
        else {
          *(int *)(iVar1 + 0xdd4) = *(int *)(iVar1 + 0xdd4) + 0x17;
          sub_08002B10(0x1bd);
        }
      }
      iVar2 = *(int *)(param_1 + 0x2c);
      iVar1 = *(int *)(iVar2 + 0xdf4) + -1;
      *(int *)(iVar2 + 0xdf4) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar2 + 0xdfc) = 0;
      }
    }
    if (*(char *)(param_1 + 0xb4) != '\0') {
      *(uint *)(iVar2 + 0xe34) = (uint)*(byte *)(param_1 + 0x11);
      goto LAB_081076a4;
    }
    sub_080E8024(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x11) << 8,0);
    sub_0801CF00(param_1,0xf601);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
LAB_081076a4:
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

