// sub_08050E9C at 0x08050E9C (thumb)

undefined4 sub_08050E9C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_1c [4];
  
  local_1c[0] = -0xa00;
  local_1c[1] = 0xa00;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if (bVar1 == 0x73) {
    local_1c[2] = *(int *)(param_1 + 0x4c);
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_1c[3] = *(int *)(param_1 + 0x50) + (uVar2 * 2 >> 0x11 & 7);
  }
  else {
    if (0x73 < bVar1) {
      if (bVar1 != 0x78) {
        return in_lr;
      }
      local_1c[2] = *(int *)(param_1 + 0x4c) + local_1c[*(byte *)(param_1 + 0xc0)];
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      local_1c[3] = *(int *)(param_1 + 0x50) + (uVar2 * 2 >> 0x11 & 7);
      sub_08001EAC(2);
      sub_0808827C(2,local_1c + 2);
      return in_lr;
    }
    if (bVar1 == 0) {
      sub_08015698(0,param_1 + 0x4c);
      *(undefined *)(param_1 + 0xd) = 3;
      return in_lr;
    }
    if (bVar1 != 0x6e) {
      return in_lr;
    }
    local_1c[2] = *(int *)(param_1 + 0x4c) - local_1c[*(byte *)(param_1 + 0xc0)];
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_1c[3] = *(int *)(param_1 + 0x50) + (uVar2 * 2 >> 0x11 & 7);
  }
  DAT_02022890 = uVar2 & 0x7fffffff;
  sub_08001EAC(2);
  sub_0808827C(2,local_1c + 2);
  return in_lr;
}

