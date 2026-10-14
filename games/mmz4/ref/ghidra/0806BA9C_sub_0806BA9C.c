// sub_0806BA9C at 0x0806BA9C (thumb)

undefined4 sub_0806BA9C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 1) goto LAB_0806bb8c;
    sub_0801CF00(param_1,0xaa0c);
    sub_08005784(param_1 + 0x74,&DAT_08858ca0);
    sub_08002B5C(200);
    *(undefined *)(param_1 + 0xd8) = 0;
    if (*(int *)(param_1 + 0x5c) < 1) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_0801CFF0(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_0806bb8c;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar2 <= *(int *)(param_1 + 0xb8)) goto LAB_0806bb8c;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    sub_0801CF00(param_1,0xaa05);
    sub_08002B10(0xd3);
    sub_08005784(param_1 + 0x74,&DAT_08858c70);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0806bb8c:
  sub_0801CFF0(param_1);
  return in_lr;
}

