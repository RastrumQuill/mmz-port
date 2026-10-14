// sub_080290C0 at 0x080290C0 (thumb)

longlong sub_080290C0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar6 = (uint)*(byte *)(param_2 + 0xd);
    if (uVar6 + 5 != (uint)*(byte *)(param_1 + 0x10)) {
      *(char *)(param_1 + 0x10) = (char)(uVar6 + 5);
      cVar1 = *(char *)(param_1 + 0x71);
      sub_08025C94(param_1,*(undefined2 *)(&DAT_082ac842 + uVar6 * 2),(int)cVar1 & 0xffff,
                   (short)*(char *)(param_1 + 0x72));
      iVar5 = cVar1 * 4;
      iVar4 = *(int *)(iVar5 + *(int *)(param_1 + 0x5c));
      iVar2 = *(int *)(&DAT_082acb78 + uVar6 * 4);
      *(int *)(param_1 + 0x5c) = iVar2;
      if (*(int *)(iVar5 + iVar2) == 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      else if (iVar4 == 0) {
        uVar3 = sub_08029314(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,uVar3,param_1 + 0x4c,0);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0x802934d;
      }
      else {
        uVar3 = sub_08029314(param_1);
        sub_0800561C(param_1 + 0x74,uVar3);
      }
    }
  }
  return (ulonglong)in_lr << 0x20;
}

