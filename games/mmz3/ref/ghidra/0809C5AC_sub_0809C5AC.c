// sub_0809C5AC at 0x0809C5AC (thumb)

undefined4 sub_0809C5AC(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  sub_080177F4();
  if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_083671d8,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) * -3) / 2;
      *(int *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) * -3) / 2;
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else if (*(int *)(param_1 + 0x60) < 0) {
      sub_0800471C(0x2b);
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    else {
      sub_0800471C(0x2b);
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
  }
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 0x400100) == 0) {
    if ((*puVar4 & 4) != 0) {
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      uVar3 = 2;
      goto LAB_0809c6b6;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 != '\0') &&
       (((*(char *)(param_1 + 0x10) == '\0' ||
         (uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
         uVar2 == 0)) || ((uVar2 & 0x8000) != 0)))) {
      if (*(char *)(param_1 + 0xd) == '\0') {
        if (*(char *)(param_1 + 0xe) == '\0') {
          if (DAT_020305fc != '\0') {
            sub_08007390(param_1 + 0x74,&DAT_08367208);
            *(undefined *)(param_1 + 0xe) = 1;
          }
        }
        else if (DAT_020305fc == '\0') {
          sub_08007390(param_1 + 0x74,&DAT_083671a8);
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      return in_lr;
    }
  }
  else {
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  uVar3 = 3;
LAB_0809c6b6:
  sub_080B2484(uVar3,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

