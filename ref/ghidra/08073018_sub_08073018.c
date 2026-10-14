// sub_08073018 at 0x08073018 (thumb)

undefined4 sub_08073018(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,7);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x54) < 1) {
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 1;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_08099484(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),6,0);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  cVar2 = sub_080079CC();
  if (cVar2 != '\0') {
    sub_08001EAC(2);
    sub_0808827C(1,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

