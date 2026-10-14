// sub_08058778 at 0x08058778 (thumb)

undefined4 sub_08058778(int param_1)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = DAT_02022adc & 1;
  if ((DAT_02022adc & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(uint *)(param_1 + 0x68) = uVar3;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082afc04,param_1 + 0x4c,4);
  *(int *)(param_1 + 0xb4) = param_1;
  *(uint *)(param_1 + 0xb0) = uVar3;
  *(uint *)(param_1 + 0x58) = uVar3;
  *(uint *)(param_1 + 0x54) = uVar3;
  uVar1 = (undefined)uVar3;
  *(undefined *)(param_1 + 0x12) = uVar1;
  if (*(byte *)(param_1 + 0x10) < 2) {
    if ((*(int *)(DAT_0202286c + 0x4c) >> 8) - (*(int *)(param_1 + 0x4c) >> 8) < 1) {
      *(undefined *)(param_1 + 0x44) = uVar1;
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
      goto LAB_08058874;
    }
  }
  else if (*(byte *)(param_1 + 0x10) == 2) {
    *(undefined *)(param_1 + 0x44) = uVar1;
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
    goto LAB_08058874;
  }
  *(undefined *)(param_1 + 0x44) = 1;
  bVar2 = *(byte *)(param_1 + 10) | 0x10;
LAB_08058874:
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080588BC(param_1);
  return in_lr;
}

