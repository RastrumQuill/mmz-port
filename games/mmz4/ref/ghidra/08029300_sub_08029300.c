// sub_08029300 at 0x08029300 (thumb)

longlong sub_08029300(void)

{
  uint in_lr;
  
  sub_08001D30(&DAT_08c44000,(DAT_0202e040 - 0xc6) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c,(DAT_0202de40 - 0xe) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44028,(DAT_0202e044 - 0x199) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44034,(DAT_0202de44 - 0xe) * 0x20 + 0x200);
  sub_0802AD90();
  return (ulonglong)in_lr << 0x20;
}

