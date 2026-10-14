// sub_0804D94C at 0x0804D94C (thumb)

undefined4 sub_0804D94C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0xb8);
  iVar5 = iVar2 - iVar4;
  if (iVar5 < 0) {
    if (iVar4 - iVar2 < 0x8001) goto LAB_0804d9f8;
LAB_0804d9d6:
    iVar2 = iVar2 - *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x54) = (iVar2 >> 0x1f) * -0x280 + -0x140;
    *(char *)(param_1 + 0x44) = -(char)(iVar2 >> 0x1f);
    if (-1 < iVar2) {
LAB_0804da50:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      goto LAB_0804da8a;
    }
  }
  else {
    if (0x8000 < iVar5) goto LAB_0804d9d6;
LAB_0804d9f8:
    if (-1 < *(int *)(param_1 + 0xc0)) goto LAB_0804da8a;
    iVar5 = *(int *)(DAT_0202286c + 0x4c);
    iVar4 = iVar5 - iVar2;
    if (iVar4 < 0) {
      iVar4 = iVar2 - iVar5;
    }
    if (0x2fff < iVar4) {
      *(int *)(param_1 + 0xc0) = 0x6000;
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar1;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
      goto LAB_0804da8a;
    }
    uVar3 = (uint)(iVar2 < iVar5);
    *(uint *)(param_1 + 0x54) = uVar3 * 0x280 + -0x140;
    *(bool *)(param_1 + 0x44) = iVar2 < iVar5;
    if (uVar3 == 0) goto LAB_0804da50;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
LAB_0804da8a:
  sub_080033F0(param_1 + 0x6c,1);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

