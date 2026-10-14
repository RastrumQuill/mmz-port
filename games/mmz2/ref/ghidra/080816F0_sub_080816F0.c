// sub_080816F0 at 0x080816F0 (thumb)

undefined4 sub_080816F0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar2 = sub_0801E11C(0,param_1,&DAT_08340d00);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
    }
    *(undefined *)(param_1 + 0xb6) = 1;
    *(undefined *)(param_1 + 0xb7) = 0x20;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xbd) = '\x01';
  }
  if (*(char *)(param_1 + 0xbd) == '\0') {
    if (*(int *)(param_1 + 0xc0) != *(int *)(DAT_0202e130 + 0x54)) {
      *(int *)(param_1 + 0xc0) = *(int *)(DAT_0202e130 + 0x54);
    }
    iVar3 = sub_08065A24(param_1);
    if (iVar3 == 0) {
      if ((*(int *)(param_1 + 0x2c) != 0) && (iVar3 = sub_0801E4D8(), iVar3 != 0)) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      if (*(char *)(param_1 + 0xb6) != '\0') {
        sub_08012ACC(param_1);
        cVar1 = *(char *)(param_1 + 0xb7) + -1;
        *(char *)(param_1 + 0xb7) = cVar1;
        if (cVar1 != '\0') {
          return in_lr;
        }
        *(char *)(param_1 + 0xb6) = '\0';
      }
      sub_080EF118(param_1,*(undefined4 *)(&DAT_08340cd8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        sub_08006E08(param_1 + 0x74,&DAT_08340d08 + (uint)*(byte *)(param_1 + 0xb4) * 0x30);
      }
      if (*(char *)(param_1 + 0xb5) != '\0') {
        *(char *)(param_1 + 0xb5) = '\0';
        *(undefined *)(param_1 + 0x25) = 0x18;
        sub_08006E08(param_1 + 0x74,&DAT_08340d08 + (uint)*(byte *)(param_1 + 0xb4) * 0x30);
      }
    }
  }
  else {
    sub_08012ACC(param_1);
    cVar1 = *(char *)(param_1 + 0xb7) + -1;
    *(char *)(param_1 + 0xb7) = cVar1;
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_0808184C(param_1);
    }
  }
  return in_lr;
}

