// sub_080418F8 at 0x080418F8 (thumb)

undefined4 sub_080418F8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0x6a);
        sub_08007390(param_1 + 0x74,&DAT_0835e6ec);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_08017700(param_1,0xa40b);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x58) + 0x500;
      *(int *)(param_1 + 0x58) = iVar5;
      iVar4 = *(int *)(param_1 + 0xc0) - iVar5;
      if (iVar4 < 0) {
        iVar5 = iVar5 + iVar4;
        *(int *)(param_1 + 0x58) = iVar5;
        sub_0807350C(*(int *)(param_1 + 0x54) + -0x500,iVar5,0x68);
        sub_0807350C(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58),0x18);
        sub_0807350C(*(int *)(param_1 + 0x54) + -0x500,*(undefined4 *)(param_1 + 0x58),0x78);
        sub_0807350C(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58),8);
        if (DAT_0202e48c - *(int *)(param_1 + 0xc0) < -0x1fff) {
          uVar3 = 0xb;
        }
        else {
          uVar3 = 10;
        }
        *(undefined *)(param_1 + 0xd) = uVar3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

