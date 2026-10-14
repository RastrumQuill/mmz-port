// sub_0809DDB0 at 0x0809DDB0 (thumb)

undefined4 sub_0809DDB0(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = DAT_02030108 & 0x40;
  if ((DAT_02030108 & 0x40) == 0) {
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(int *)(param_1 + 0x60) < 0x700) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      if (((*(uint *)(param_1 + 0x8c) & 4) != 0) ||
         (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),iVar3), sVar1 != 0)) {
        sub_08017700(param_1,0x170a);
        sub_080177F4(param_1);
        sub_0800471C(0x35);
        sub_08007390(param_1 + 0x74,&DAT_083674c0);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      if (*(char *)(param_1 + 0x71) == '\x02') {
        *(uint *)(param_1 + 0x8c) = uVar2;
        *(uint *)(param_1 + 0x90) = uVar2;
        *(char *)(param_1 + 0x94) = (char)uVar2;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
        sub_0809DEC4(param_1);
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

