// sub_08038B24 at 0x08038B24 (thumb)

undefined4 sub_08038B24(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_2;
  iVar6 = param_1 + 0x54;
  iVar2 = param_1 + 0xb4;
  puVar5 = (undefined4 *)(param_1 + 0xd8);
  sub_0801F5F4(iVar6,iVar2,puVar5,*puVar5,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,param_2,1,1,0,1);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 2) {
    sub_0801F57C(iVar6,iVar2,puVar5,*puVar5,*(undefined4 *)(param_1 + 0xdc),
                 *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
    return in_lr;
  }
  if (bVar1 < 3) {
    uVar4 = *puVar5;
    uVar3 = *(undefined4 *)(param_1 + 0xdc);
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    if (bVar1 != 4) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x177) != '\x01') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x178) != '\x02') {
      if (*(char *)(param_1 + 0x178) != '\x03') {
        return in_lr;
      }
      sub_0801F57C(iVar6,iVar2,puVar5,*puVar5,*(undefined4 *)(param_1 + 0xdc),
                   *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
      return in_lr;
    }
    uVar4 = *puVar5;
    uVar3 = *(undefined4 *)(param_1 + 0xdc);
    bVar1 = *(byte *)(param_1 + 10);
  }
  sub_0801F5B8(iVar6,iVar2,puVar5,uVar4,uVar3,bVar1 >> 4 & 1,1,1,0,1);
  return in_lr;
}

