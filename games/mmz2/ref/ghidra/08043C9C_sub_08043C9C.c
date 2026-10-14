// sub_08043C9C at 0x08043C9C (thumb)

undefined4 sub_08043C9C(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa318);
    sub_08006E08(param_1 + 0x74,&DAT_0833a6c0);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (3 < bVar1) {
    if (bVar1 == 4) {
      iVar4 = *(int *)(param_1 + 0xc4);
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar4 + 9)] + 0xc);
      iVar4 = *(int *)(param_1 + 200);
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar4 + 9)] + 0xc);
      uVar3 = sub_080B4A68(param_1,param_1 + 0x54,2,0);
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      uVar2 = sub_080032EC(0x54);
      *(undefined2 *)(param_1 + 0xe0) = uVar2;
    }
    iVar4 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      sub_0809CAD0(param_1,param_1 + 0x54,1,0);
      sub_0809CAD0(param_1,param_1 + 0x54,1,1);
    }
    if (99 < *(byte *)(param_1 + 0x12)) {
      sub_08003338((int)*(short *)(param_1 + 0xe0));
      *(short *)(param_1 + 0xe0) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

