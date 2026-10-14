// sub_08054310 at 0x08054310 (thumb)

undefined4 sub_08054310(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(byte *)(param_1 + 0xc5) + 1;
  *(byte *)(param_1 + 0xc5) = (byte)iVar2;
  piVar4 = (int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x50) = *piVar4 + (short)(&DAT_080c8e24)[iVar2] * 8;
  *(byte *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + 1U & 0x7f;
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0xc) {
    if (0xc < bVar1) {
      if (bVar1 != 0x46) {
        if (bVar1 < 0x47) {
          if (bVar1 != 0x40) {
            return in_lr;
          }
        }
        else if (bVar1 != 0x4c) {
          return in_lr;
        }
      }
      local_10 = *(int *)(param_1 + 0xb8) + -0x1000;
      local_c = *piVar4 + 0x4000;
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 1) == 0) {
        sub_08077BD8(param_1,&local_10,3);
        return in_lr;
      }
      goto LAB_0805442e;
    }
    if ((bVar1 != 0) && (bVar1 != 6)) {
      return in_lr;
    }
  }
  local_10 = *(int *)(param_1 + 0xb8) + -0x1000;
  local_c = *piVar4 + 0x5000;
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  if ((uVar3 * 2 >> 0x11 & 1) == 0) {
    sub_08077BD8(param_1,&local_10,3);
    return in_lr;
  }
LAB_0805442e:
  sub_08077BD8(param_1,&local_10,0);
  return in_lr;
}

