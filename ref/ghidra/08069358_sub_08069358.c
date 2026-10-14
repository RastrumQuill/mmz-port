// sub_08069358 at 0x08069358 (thumb)

undefined4 sub_08069358(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      if (*(char *)(param_1 + 0x12) == '\0') {
        sub_08001EAC(2);
      }
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 3) == 0) {
        sub_08068AE8(param_1);
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      local_28 = *(int *)(param_1 + 0x4c);
      local_24 = *(int *)(param_1 + 0x50) + -0x1800;
      sub_0808887C(param_1,&local_28,*(undefined *)(param_1 + 0x13),4);
      sub_0808887C(param_1,&local_28,*(undefined *)(param_1 + 0x13),5);
      sub_0808887C(param_1,&local_28,*(undefined *)(param_1 + 0x13),6);
      local_24 = *(int *)(param_1 + 0x50) + -0x1000;
      sub_0808827C(1,&local_28);
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_28 = *(int *)(param_1 + 0x4c) + (0x10 - (uVar3 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 0x50) + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      local_20 = 0x343fd;
      local_1c = &DAT_02022890;
      sub_0808827C(2,&local_28);
      uVar3 = local_20 * *local_1c + 0x269ec3;
      local_28 = *(int *)(param_1 + 0x4c) + (0x10 - (uVar3 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar3 = local_20 * (uVar3 & 0x7fffffff) + 0x269ec3;
      *local_1c = uVar3 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 0x50) + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      sub_0808827C(2,&local_28);
      sub_08001EAC(2);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080489E4(param_1);
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x13);
    if (*(char *)(param_1 + 0x13) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

