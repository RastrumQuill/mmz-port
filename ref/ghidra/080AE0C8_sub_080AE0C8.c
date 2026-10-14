// sub_080AE0C8 at 0x080AE0C8 (thumb)

undefined4 sub_080AE0C8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    bVar1 = (&DAT_02022ad4)
            [(int)*(uint *)(&DAT_082b6864 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
    uVar2 = *(uint *)(&DAT_082b6864 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7;
    if (((int)(uint)bVar1 >> uVar2 & 1U) == 0) {
      (&DAT_02022ad4)[(int)*(uint *)(&DAT_082b6864 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
           bVar1 | (byte)(1 << uVar2);
      *(undefined *)(param_1 + 0xf) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0xf) != '\0') {
    if ((*(char *)(param_1 + 0xc4) == '\0') || (*(int *)(param_1 + 0x24) == 0)) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      DAT_02022cb4 = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

