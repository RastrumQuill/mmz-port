// sub_0809C930 at 0x0809C930 (thumb)

undefined4 sub_0809C930(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 0x200) == 0) {
    if ((*puVar4 & 4) == 0) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if ((cVar1 != '\0') &&
         (((*(char *)(param_1 + 0x11) != '\x01' ||
           (uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
           uVar2 == 0)) || ((uVar2 & 0x8000) != 0)))) {
        if (*(char *)(param_1 + 0xe) == '\0') {
          sub_08017700(param_1,0x408);
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
        else if (*(char *)(param_1 + 0xe) != '\x01') {
          return in_lr;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        sub_080177F4(param_1);
        return in_lr;
      }
      uVar3 = 3;
    }
    else {
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      sub_0800471C(0x35);
      uVar3 = 2;
    }
  }
  else {
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0800471C(0x35);
    uVar3 = 2;
  }
  sub_080B2484(uVar3,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

