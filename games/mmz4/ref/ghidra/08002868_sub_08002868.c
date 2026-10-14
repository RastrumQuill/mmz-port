// sub_08002868 at 0x08002868 (thumb)

undefined4 sub_08002868(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_04000000;
  DAT_04000000 = (ushort)DAT_030032d4 | uVar1 & 0xefff;
  if (DAT_030032d0 < &DAT_030032d0) {
    do {
      *(undefined2 *)DAT_030032d0 = 0x200;
      DAT_030032d0 = DAT_030032d0 + 2;
    } while (DAT_030032d0 < &DAT_030032d0);
  }
  DAT_040000d4 = 0x3002ed0;
  DAT_040000d8 = 0x7000000;
  DAT_040000dc = 0x84000100;
  uVar2 = DAT_040000dc;
  DAT_030032d0 = (undefined4 *)&DAT_03002ed0;
  return in_lr;
}

