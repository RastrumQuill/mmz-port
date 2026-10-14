// sub_080E50E0 at 0x080E50E0 (thumb)

undefined4 sub_080E50E0(int param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 in_lr;
  byte abStack_28 [20];
  
  puVar3 = (uint *)(param_1 + 0x7254);
  cVar2 = *(char *)puVar3;
  sub_080EF3F0(abStack_28,&DAT_080ff94c,0x11);
  if ((DAT_02000d16 & 0x80) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if ((DAT_02000d16 & 0x40) != 0) {
    cVar2 = cVar2 + '\x10';
  }
  uVar1 = sub_080EF330(cVar2,0x11);
  uVar1 = uVar1 & 0xff;
  sub_080DE6C8("STAGE 01 OPENING",7,1);
  sub_080DE6C8("STAGE 02 JUNGLE",7,2);
  sub_080DE6C8("STAGE 03 ICE",7,3);
  sub_080DE6C8("STAGE 04 BOMBER",7,4);
  sub_080DE6C8("STAGE 05 PLANT",7,5);
  sub_080DE6C8("STAGE 06 TRAIN",7,6);
  sub_080DE6C8("STAGE 07 JUNGLE2",7,7);
  sub_080DE6C8("STAGE 08 ICE2",7,8);
  sub_080DE6C8("STAGE 09 BOMBER2",7,9);
  sub_080DE6C8("STAGE 0A PLANT2",7,10);
  sub_080DE6C8("STAGE 0B NA-OLD2",7,0xb);
  sub_080DE6C8("STAGE 0C NA-OLD1",7,0xc);
  sub_080DE6C8("STAGE 0D NA-1",7,0xd);
  sub_080DE6C8("STAGE 0E NA-2",7,0xe);
  sub_080DE6C8("STAGE 0F NA-3",7,0xf);
  sub_080DE6C8("STAGE 10 YGGR-DRASILL",7,0x10);
  sub_080DE6C8("COMMANDER ROOM",7,0x11);
  sub_080DE6C8(&DAT_080ffa8c,6,uVar1 + 1);
  *puVar3 = uVar1;
  if ((DAT_02000d14 & 9) != 0) {
    *puVar3 = (uint)abStack_28[uVar1];
    DAT_02036c34 = DAT_02036c34 | 0xc;
    sub_080148A4();
    sub_080E0E64(param_1,0x300);
  }
  return in_lr;
}

