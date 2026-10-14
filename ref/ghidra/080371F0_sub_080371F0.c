// sub_080371F0 at 0x080371F0 (thumb)

undefined4 sub_080371F0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x14') {
    local_14 = *(int *)(param_1 + 0x4c);
    local_10 = *(int *)(param_1 + 0x50);
    iVar2 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - local_14) * 0x100 >> 0x10,
                         ((*(int *)(DAT_0202286c + 0x50) - local_10) + -0x1800) * 0x100 >> 0x10);
    uVar3 = (uint)(iVar2 << 0x10) >> 0x18;
    if (0x80 < uVar3) {
      if (uVar3 < 0xc1) {
        uVar3 = 0x80;
      }
      else {
        uVar3 = 0;
      }
    }
    sub_08001EAC(0x41);
    sub_0807F400(&local_14,0x300,uVar3);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08038A78(param_1,3,2,1);
    *(undefined2 *)(param_1 + 0xe) = 5;
  }
  return in_lr;
}

