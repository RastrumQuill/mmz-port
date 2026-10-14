// sub_080B7CAC at 0x080B7CAC (thumb)

undefined4 sub_080B7CAC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 in_lr;
  undefined auStack_20 [8];
  undefined auStack_18 [8];
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b83d0 + (uint)*(byte *)(param_1 + 0xe) * 4));
  if (((*(char *)(param_1 + 0xcd) != '\0') && ((DAT_02022b64 & 1) != 0)) &&
     (uVar3 = DAT_02022b6e & 1, (DAT_02022b6e & 1) == 0)) {
    sub_08018FF8(*(undefined4 *)(param_1 + 0x20),auStack_20,0);
    uVar2 = sub_080B52CC(param_1,0,auStack_20,auStack_18,uVar3);
    cVar1 = sub_080B8170(param_1,uVar2);
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(char *)(param_1 + 0xe) = (char)uVar3;
      *(undefined4 *)(param_1 + 0xd0) = uVar2;
    }
  }
  return in_lr;
}

