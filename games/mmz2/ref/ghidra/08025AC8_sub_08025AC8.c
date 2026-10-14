// sub_08025AC8 at 0x08025AC8 (thumb)

undefined4 sub_08025AC8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x187);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x187) = cVar1 + -1;
    cVar1 = sub_0801E91C(param_1);
    if (cVar1 != '\0') {
      if (*(byte *)(param_1 + 0x182) < 100) {
        iVar2 = sub_080EF150((uint)*(byte *)(param_1 + 0x182) * 0x380,100);
        iVar2 = 0x380 - iVar2;
      }
      else {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x5c) = iVar2;
    }
  }
  if (((*(byte *)(param_1 + 0x176) < 3) && (*(char *)(param_1 + 0x17f) != '\x05')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0801EA38(param_1,5,1,1);
  }
  uVar3 = sub_08032968(param_1);
  puVar5 = (undefined4 *)(param_1 + 0xd8);
  sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,puVar5,*puVar5,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,uVar3,1,1,0,1);
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  uVar4 = sub_0801F5B8(param_1 + 0x54,param_1 + 0xb4,puVar5,*puVar5,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  iVar2 = sub_080329BC(param_1,iVar2);
  if ((-1 < iVar2 * *(int *)(param_1 + 0x68)) || ((uVar4 & 0x4f) != 0)) {
    sub_08025EEC(param_1);
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x102;
  }
  return in_lr;
}

