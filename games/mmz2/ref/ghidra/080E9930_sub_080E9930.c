// sub_080E9930 at 0x080E9930 (thumb)

undefined4 sub_080E9930(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  puVar5 = (ushort *)(*(int *)(param_1 + 0x18) + 0x16a);
  uVar2 = 0;
  switch(*(undefined *)(DAT_0202ebf0 + 4)) {
  case 0:
    uVar2 = 9;
    break;
  case 1:
    uVar2 = 2;
    break;
  case 2:
    uVar2 = 3;
    break;
  case 3:
    uVar2 = 4;
    break;
  case 4:
    uVar2 = 5;
    break;
  case 5:
    uVar2 = 6;
    break;
  case 6:
    uVar2 = 7;
    break;
  case 7:
    uVar2 = 0;
    break;
  case 8:
    uVar2 = 1;
    break;
  case 9:
    uVar2 = 8;
  }
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  iVar1 = (uVar2 & 3) * 8 + ((uVar2 >> 2) + 0x18) * 0x20;
  do {
    *puVar5 = (ushort)iVar1 & 0x3ff;
    puVar5 = puVar5 + 1;
    iVar1 = iVar1 + 1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  puVar5 = (ushort *)(iVar4 + 0x1ac);
  switch(*(undefined *)(DAT_0202ebf0 + 2)) {
  case 0:
    uVar2 = 0x1a;
    break;
  case 1:
    uVar2 = 10;
    break;
  case 2:
    uVar2 = 0xb;
    break;
  case 3:
    uVar2 = 0xc;
    break;
  case 4:
    uVar2 = 0xd;
    break;
  case 5:
    uVar2 = 0xe;
    break;
  case 6:
    uVar2 = 0xf;
    break;
  case 7:
    uVar2 = 0x10;
    break;
  case 8:
    uVar2 = 0x11;
    break;
  case 9:
    uVar2 = 0x12;
    break;
  case 10:
    uVar2 = 0x13;
    break;
  case 0xb:
    uVar2 = 0x14;
    break;
  case 0xc:
    uVar2 = 0x15;
    break;
  case 0xd:
    uVar2 = 0x16;
    break;
  case 0xe:
    uVar2 = 0x17;
    break;
  case 0xf:
    uVar2 = 0x18;
    break;
  case 0x10:
    uVar2 = 0x19;
    break;
  case 0x11:
    uVar2 = 0x1b;
    break;
  case 0x12:
    uVar2 = 0x1c;
    break;
  case 0x13:
    uVar2 = 0x1d;
    break;
  case 0x14:
    uVar2 = 0x1e;
  }
  uVar3 = 0;
  iVar1 = (uVar2 & 3) * 8 + ((uVar2 >> 2) + 0x18) * 0x20;
  do {
    *puVar5 = (ushort)iVar1 & 0x3ff;
    puVar5 = puVar5 + 1;
    iVar1 = iVar1 + 1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return in_lr;
}

