// sub_08028FF8 at 0x08028FF8 (thumb)

longlong sub_08028FF8(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint in_lr;
  
  if (*(byte *)(param_2 + 0xd) == 0) {
    uVar2 = (uint)*(byte *)(param_2 + 0xe);
  }
  else {
    uVar2 = *(byte *)(param_2 + 0xd) + 1;
  }
  if (uVar2 != *(byte *)(param_1 + 0x10)) {
    *(char *)(param_1 + 0x10) = (char)uVar2;
    uVar7 = (uint)*(byte *)(param_1 + 0xd);
    cVar1 = *(char *)(param_1 + 0x71);
    sub_08025C94(param_1,*(undefined2 *)(&DAT_082ac824 + (uVar2 * 3 + uVar7) * 2),
                 (int)cVar1 & 0xffff,(short)*(char *)(param_1 + 0x72));
    if (uVar7 != 2) {
      iVar5 = cVar1 * 4;
      iVar6 = *(int *)(iVar5 + *(int *)(param_1 + 0x5c));
      iVar3 = *(int *)(&DAT_082ac950 + (uVar2 * 2 + uVar7) * 4);
      *(int *)(param_1 + 0x5c) = iVar3;
      if (*(int *)(iVar5 + iVar3) == 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      else if (iVar6 == 0) {
        uVar4 = sub_08029314(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,uVar4,param_1 + 0x4c,0);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0x802934d;
      }
      else {
        uVar4 = sub_08029314(param_1);
        sub_0800561C(param_1 + 0x74,uVar4);
      }
    }
  }
  return (ulonglong)in_lr << 0x20;
}

