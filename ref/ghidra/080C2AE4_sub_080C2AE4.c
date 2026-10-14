// sub_080C2AE4 at 0x080C2AE4 (thumb)

undefined4 sub_080C2AE4(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined *)(param_1 + 3) = 1;
    bVar1 = *(byte *)(param_1 + 0x9ec);
    iVar5 = (uint)bVar1 * 4;
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cbf34 + iVar5));
    bVar2 = *(byte *)(param_1 + 0x9ed);
    iVar4 = sub_080C8B68(((uint)bVar1 - (uint)bVar2) + 3,3);
    iVar6 = (uint)(iVar4 == 1) * 2 + -1;
    iVar4 = *(int *)(param_1 + 0x9f0);
    iVar7 = iVar6 * 0x10000 + iVar4;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0x20000;
      iVar4 = iVar4 + 0x20000;
      *(int *)(param_1 + 0x9f0) = iVar4;
      sub_080C8A9C(param_1,iVar4,*(undefined4 *)(&DAT_082cbf40 + (uint)bVar2 * 4));
    }
    sub_080C8A9C(param_1,iVar7,*(undefined4 *)(&DAT_082cbf40 + iVar5));
    *(int *)(param_1 + 0x9f4) = iVar6 * 0x1000;
    sub_08001EAC(199);
    sub_080C2BD4(param_1);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x9ed);
    iVar4 = (uint)bVar1 * 4;
    cVar3 = sub_080C8A9C(*(undefined4 *)(param_1 + 0x9e0 + iVar4),0,
                         *(undefined4 *)(&DAT_082cbf28 + iVar4));
    *(short *)(param_1 + 4) = (short)cVar3;
    sub_080C309C(param_1,0xffffffff,(int)(char)bVar1);
  }
  return in_lr;
}

