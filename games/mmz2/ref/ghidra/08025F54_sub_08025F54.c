// sub_08025F54 at 0x08025F54 (thumb)

undefined4 sub_08025F54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  if (((*(byte *)(param_1 + 0x176) < 3) && (*(char *)(param_1 + 0x17f) != '\x06')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0801EA38(param_1,6,1,1);
  }
  local_28 = *(int *)(param_1 + 0x54);
  local_24 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = sub_08032968(param_1);
  iVar2 = param_1 + 0x54;
  puVar5 = (undefined4 *)(param_1 + 0xd8);
  sub_0801F5F4(iVar2,param_1 + 0xb4,puVar5,*puVar5,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,uVar1,1,1,0,1);
  iVar4 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  uVar3 = sub_0801F57C(iVar2,&local_28,puVar5,*puVar5,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  sub_0801F5F4(iVar2,&local_28,puVar5,*puVar5,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,*(int *)(param_1 + 0x54) - local_28,1,1,0,1);
  sub_08032A04(param_1,iVar4);
  if ((uVar3 & 0xf) != 0) {
    sub_08032A54(param_1);
    sub_0801E6AC(7);
  }
  return in_lr;
}

