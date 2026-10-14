// sub_080A2318 at 0x080A2318 (thumb)

undefined4 sub_080A2318(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_0801749C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 & 0xef | 3;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 0x13;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(undefined *)(param_1 + 0x12) = 0xff;
  cVar2 = *(char *)(param_1 + 0x11);
  if (cVar2 == '\0') {
    sub_0800393C(&DAT_085d7e20,(DAT_0202fa94 - 0x300) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7e2c,(DAT_0202f894 - 6) * 0x20 + 0x200);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_08367b88,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    if (cVar2 == '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_08367bb8,param_1 + 0x54,4);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      if (cVar2 != '\x02') goto LAB_080a24a0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_08367bd0,param_1 + 0x54,4);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + *(int *)(&DAT_080fec58 + (uint)*(byte *)(param_1 + 0x10) * 8);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) + *(int *)(&DAT_080fec5c + (uint)*(byte *)(param_1 + 0x10) * 8);
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[bVar1] + 4);
    *(char *)(param_1 + 0xd) = cVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
LAB_080a24a0:
  sub_080A24B8(param_1);
  return in_lr;
}

