// sub_080F7E4C at 0x080F7E4C (thumb)

undefined4 sub_080F7E4C(int param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08866ec4 + (uint)*(byte *)(param_1 + 0x11) * 2));
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08866ea4;
    uVar1 = 0xf;
  }
  else {
    if ((DAT_02000c80 & 0x7f) == 0xf) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar2 = &DAT_08866ebc;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar2 = &DAT_08866eac;
    }
    *(undefined **)(param_1 + 0x30) = puVar2;
    uVar1 = 0xa02f;
  }
  *(undefined2 *)(param_1 + 0x26) = uVar1;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08866e8c + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080F7F08(param_1);
  return in_lr;
}

