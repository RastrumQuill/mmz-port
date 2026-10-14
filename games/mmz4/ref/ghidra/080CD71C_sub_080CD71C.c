// sub_080CD71C at 0x080CD71C (thumb)

undefined4 sub_080CD71C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(byte *)(param_1 + 0x10) < 2) {
LAB_080cd760:
    uVar2 = 0xdc00;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (9 < (byte)(&DAT_08863528)[*(byte *)(param_1 + 0x10)]) {
        sub_0801CF00(param_1,0xdc03);
        goto LAB_080cd778;
      }
      goto LAB_080cd760;
    }
    if ((byte)(&DAT_08863528)[*(byte *)(param_1 + 0x10)] < 10) goto LAB_080cd760;
    uVar2 = 0xdc04;
  }
  sub_0801CF00(param_1,uVar2);
LAB_080cd778:
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x5000;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (uint)(byte)(&DAT_08863528)[*(byte *)(param_1 + 0x10)] * -0x100;
    iVar1 = (uint)(byte)(&DAT_08863528)[*(byte *)(param_1 + 0x10)] * -0x100;
  }
  else {
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (uint)(byte)(&DAT_08863528)[*(byte *)(param_1 + 0x10)] * 0x100;
    iVar1 = (uint)(byte)(&DAT_08863528)[*(byte *)(param_1 + 0x10)] << 8;
  }
  *(int *)(param_1 + 0x68) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CD81C(param_1);
  return in_lr;
}

