// sub_080280C4 at 0x080280C4 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_080280C4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(param_1 + 0xc);
  switch(*(undefined2 *)(iVar3 + 2)) {
  case 0:
    DAT_02000a06 = 0x284;
    _DAT_02000a10 = 0;
    DAT_02000a00 = DAT_02000a00 | 0x1200;
    local_20 = 0;
    sub_081284E4(&local_20,&DAT_06001000,0x1000200);
    sub_08001D30(&DAT_08b6c000 + (uint)*(byte *)(iVar3 + 1) * 0x14,(DAT_02000a06 & 0xc) << 0xc);
    bVar1 = *(byte *)(iVar3 + 1);
    goto LAB_080282c6;
  case 1:
    DAT_02000a00 = DAT_02000a00 & 0xedff | 0x100;
    sub_08002464();
    sub_0810CF20();
    break;
  case 2:
    DAT_02000a06 = 0x8284;
    _DAT_02000a10 = 0xa00000;
    DAT_02000a00 = DAT_02000a00 & 0xfeff | 0x1200;
    local_1c = 0;
    sub_081284E4(&local_1c,&DAT_06001000,0x1000200);
    sub_08001D30(&DAT_08b6c000 + (uint)*(byte *)(iVar3 + 1) * 0x14,(DAT_02000a06 & 0xc) << 0xc);
    sub_08002208(&DAT_08b6c00c + (uint)*(byte *)(iVar3 + 1) * 0x14,0);
    sub_08002734(0x12,&DAT_08b2c000,*(undefined *)(iVar3 + 1),0,0);
    sub_080027B8(&DAT_06000800 + (DAT_02000a06 & 0x1f00) * 8,&DAT_08b2c000,
                 *(char *)(iVar3 + 1) + '\x01',0,0);
    sub_0800243C();
    break;
  case 3:
    DAT_02000a06 = 0x8284;
    _DAT_02000a10 = 0x600000;
    DAT_02000a00 = DAT_02000a00 & 0xfeff | 0x1200;
    local_1c = 0;
    sub_081284E4(&local_1c,&DAT_06001000,0x1000200);
    sub_08001D30(&DAT_08b6c000 + (uint)*(byte *)(iVar3 + 1) * 0x14,(DAT_02000a06 & 0xc) << 0xc);
    bVar1 = *(byte *)(iVar3 + 1);
LAB_080282c6:
    sub_08002208(&DAT_08b6c00c + (uint)bVar1 * 0x14,0);
    sub_08002734(0x12,&DAT_08b2c000,*(undefined *)(iVar3 + 1),0,0);
    sub_0800243C();
    break;
  case 4:
    if (DAT_02000a12 != 0) {
      _DAT_02000a10 = CONCAT22(DAT_02000a12 + -1,_DAT_02000a10);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar2 = 1;
      goto LAB_080283a2;
    }
    sub_0810CE60();
    break;
  case 5:
    DAT_03002ac0 = (undefined2)*(undefined4 *)(iVar3 + 4);
    break;
  case 6:
    DAT_02000a06 = 0x204;
    _DAT_02000a10 = 0;
    DAT_02000a00 = DAT_02000a00 | 0x1200;
    local_1c = 0;
    sub_081284E4(&local_1c,&DAT_06001000,0x1000200);
    sub_08001D30(&DAT_08b6c000 + (uint)*(byte *)(iVar3 + 1) * 0x14,(DAT_02000a06 & 0xc) << 0xc);
    sub_08002208(&DAT_08b6c00c + (uint)*(byte *)(iVar3 + 1) * 0x14,0);
    sub_08002734(0x12,&DAT_08b2c000,*(undefined *)(iVar3 + 1),0,0);
    sub_0800243C();
  }
  uVar2 = 0;
LAB_080283a2:
  return CONCAT44(in_lr,uVar2);
}

