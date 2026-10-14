// sub_0800EAC4 at 0x0800EAC4 (thumb)

undefined4 sub_0800EAC4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000fd0 = 0x3b44;
    DAT_02000fd2 = 0xc04;
    DAT_0202e01c = '\0';
    *(undefined4 *)(param_1 + 0x50) = 0xffffff00;
    sub_08002D68(0x54,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_0202e01c != '\0') && (*(int *)(param_1 + 0x50) != 0)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  DAT_0202d004 = *(int *)(param_1 + 0x50) * -0x100 + 0x75000;
  sub_08002EA0(0x54);
  return in_lr;
}

