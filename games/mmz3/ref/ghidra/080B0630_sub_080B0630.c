// sub_080B0630 at 0x080B0630 (thumb)

undefined4 sub_080B0630(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xe) < 10) {
    iVar3 = *(int *)(param_1 + 0x28);
    if (*(byte *)(iVar3 + 0xc) < 2) {
      iVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x11),6);
      iVar3 = sub_080FE4D8(*(undefined *)(iVar3 + 0x11),6);
      if (iVar2 * 0x1000000 + iVar3 * -0x1000000 != 0) goto LAB_080b0660;
    }
    *(undefined *)(param_1 + 0xe) = 10;
  }
LAB_080b0660:
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 10) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        sub_08017700(param_1,0xba03);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 0xb) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_08369e94,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0xba02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

